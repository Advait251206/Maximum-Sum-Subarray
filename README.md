# Practical 4 – Design and Analysis of Algorithms  

Hi, I’m **Advait Kawale (A4-B3, Roll No. 42)** and this repository contains my **Practical 4 submission** for the course **Design and Analysis of Algorithms (DAA)**.  

## 📌 Problem Statement  
Implement the **Maximum Sum Subarray** for a given scenario of **resource allocation** using the **divide and conquer approach**.  

## 🖥️ My Implementation  
I have written a **C program** that takes an array of resources and a given constraint, then finds the **subarray with the maximum sum** that does not exceed the constraint.  

The program:  
- Takes array size and elements as input.  
- Accepts the constraint value.  
- Uses a **sliding window approach** to efficiently determine the feasible subarray.  
- Handles different edge cases like empty arrays, zero constraints, and no possible subarray.  

## ✅ Example Test Cases  
- **Case 1:**  
  Input → `resources = [2, 1, 3, 4], constraint = 5`  
  Output → Subarray `[2, 1]` or `[1, 3]` with sum `4`.  

- **Case 2:**  
  Input → `resources = [6, 7, 8], constraint = 5`  
  Output → No feasible subarray.  

- **Case 3:**  
  Input → `resources = [1, 5, 2, 3], constraint = 5`  
  Output → Subarray `[5]` with sum `5`.
