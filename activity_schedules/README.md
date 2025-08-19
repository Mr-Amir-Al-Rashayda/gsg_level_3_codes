# Assignment: No Two Consecutive Activities

This folder contains the C solution for the "No Two Consecutive Activities" recursive programming challenge.

## 1. Problem Statement

Given a number of days `n`, the program must print all possible sequences of daily activities from the set `{"Swimming", "Running", "Football"}`. [cite_start]The main constraint is that no two consecutive days can have the same activity[cite: 18, 20].

## 2. Example Run

[cite_start]This is the expected output for an input of `n=2`[cite: 43].

**Input:**
2
**Output:**
Swimming Running
Swimming Football
Running Swimming
Running Football
Football Swimming
Football Running
COUNT: 6

## 3. COUNT Formula

The total number of valid schedules can be calculated with a mathematical formula. For `n` days, the total count is:

**`COUNT = 3 * 2^(n-1)`**

**Explanation:**
* For the first day, there are **3** possible activities.
* For every subsequent day, there are only **2** possible activities (since we must exclude the activity from the previous day).

**Sample Test Values:**
* For `n=2`, COUNT = 3 * 2^(1) = 6
* For `n=3`, COUNT = 3 * 2^(2) = 12
* For `n=10`, COUNT = 3 * 2^(9) = 1536

## 4. Author Information

* **Name:** Amir Rasmi Al-Rashayda






