//
//  HangmanSolver.h
//  Hangman Solver
//
//  Created by Ini on 8/8/15.
//  Copyright (c) 2015 Insi Productions. All rights reserved.
//

#ifndef __Hangman_Solver__HangmanSolver__
#define __Hangman_Solver__HangmanSolver__

#include <stdio.h>
#include <set>
#include <map>
#include <string>
#include <vector>

using namespace std;

class HangmanSolver {
    public:
        HangmanSolver();
        void playGame();
        vector<char> getListOfGuesses(string word);
        bool isWord(string word);
    
    private:
        map<char, int> letterCounts(set<string>&);
        void setWordLength(int length);
        char guess();
        void setGuessResult(char guessedChar, set<int> positions);
        void printGame();
        
        int wordLength;
        vector<char> wordChars;
        set<string> dictionary;
        vector<string> commonWords;
        set<string> possibleWords;
        set<string> possibleCommonWords;
        set<char> previousGuesses;
        int wrongGuesses;
};

#endif /* defined(__Hangman_Solver__HangmanSolver__) */
