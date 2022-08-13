package Leetcode;

import java.util.Stack;

class Solution {
    public static void main(String[] args) {
        System.out.println(isValid("]"));
    }
    public static boolean isValid(String s) {
        Stack<Character> stack = new Stack<Character>();
        for(char c: s.toCharArray()){
            if(c == ')' && !stack.isEmpty() &&stack.peek()=='(') stack.pop();
            else if(c == ']' && !stack.isEmpty() &&stack.peek()=='[') stack.pop();
            else if(c == '}' && !stack.isEmpty() &&stack.peek()=='{') stack.pop();
            else stack.push(c);
        }
        return stack.isEmpty();
    }
}