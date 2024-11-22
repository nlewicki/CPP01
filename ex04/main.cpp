/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolewicki <nicolewicki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 11:38:04 by nicolewicki       #+#    #+#             */
/*   Updated: 2024/11/22 11:40:26 by nicolewicki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"

void runTests() {
    std::cout << "Running tests..." << std::endl;

    // Create test file
    {
        std::ofstream testFile("test.txt");
        testFile << "Hello world!\nThis is a test file.\nHello again world!\n";
        testFile.close();
    }

    // Test 1: Basic replacement
    {
        FileReplacer replacer("test.txt", "world", "universe");
        if (!replacer.replace())
            std::cout << "Test 1 failed: Basic replacement failed" << std::endl;
        else {
            std::ifstream resultFile("test.txt.replace");
            std::stringstream buffer;
            buffer << resultFile.rdbuf();
            std::string result = buffer.str();
            if (result != "Hello universe!\nThis is a test file.\nHello again universe!\n")
                std::cout << "Test 1 failed: Incorrect replacement" << std::endl;
            else
                std::cout << "Test 1 passed" << std::endl;
        }
    }

    // Test 2: Empty search string
    {
        FileReplacer replacer("test.txt", "", "something");
        if (replacer.replace())
            std::cout << "Test 2 failed: Should fail with empty search string" << std::endl;
        else
            std::cout << "Test 2 passed" << std::endl;
    }

    // Test 3: Non-existent file
    {
        FileReplacer replacer("nonexistent.txt", "hello", "hi");
        if (replacer.replace())
            std::cout << "Test 3 failed: Should fail with non-existent file" << std::endl;
        else
            std::cout << "Test 3 passed" << std::endl;
    }

    // Cleanup test files
    remove("test.txt");
    remove("test.txt.replace");
}

int main(int argc, char* argv[]) {
    if (argc == 2 && std::string(argv[1]) == "--test") {
        runTests();
        return 0;
    }

    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <search_string> <replace_string>" << std::endl;
        std::cerr << "   or: " << argv[0] << " --test to run tests" << std::endl;
        return 1;
    }

    FileReplacer replacer(argv[1], argv[2], argv[3]);
    return replacer.replace() ? 0 : 1;
}