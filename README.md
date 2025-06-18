# 🔐 Generate Strong Password - C++ Console Application

A simple and effective C++ program to generate **strong, secure passwords** using a mix of uppercase letters, lowercase letters, digits, and special characters.

---

## 🚀 Features

- Generates strong random passwords
- Customizable password length
- Ensures at least one:
  - Uppercase letter
  - Lowercase letter
  - Digit
  - Special character

---

## 📁 File

- `GenerateStrongPassword.cpp` — Main C++ source file containing all logic

---

## 🛠️ How It Works

1. Prompts the user for password length.
2. Ensures inclusion of all character types (upper, lower, digit, special).
3. Randomly fills the rest of the password.
4. Shuffles characters to enhance randomness.
5. Displays the strong password.

---

## ▶️ Usage

### Requirements

- C++ compiler (`g++` or similar)

### Compile and Run

**Linux / macOS:**
```bash
g++ GenerateStrongPassword.cpp -o password_generator
./password_generator
```

**Windows (Command Prompt / Power Shell) : **
```bash
g++ GenerateStrongPassword.cpp -o password_generator.exe
password_generator.exe
```
