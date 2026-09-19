# Reporting Guidelines for CppCodeExample

Thank you for helping keep this project a safe, welcoming, and useful place to learn C++. This document explains **what** you should report, **how** to report it, and **what happens** after you do.

These guidelines are intended to be read alongside our [CODE_OF_CONDUCT.md](CODE_OF_CONDUCT.md). Where the two overlap, the Code of Conduct takes precedence.

---

## 1. Purpose

This repository is a hand-written C++ learning resource for beginners. We want it to stay:

- **Accurate** — code that compiles, runs, and teaches the right thing.
- **Safe** — no malicious, harmful, or deceptive content.
- **Respectful** — a place where anyone can learn without harassment.
- **Maintainable** — consistent style, clear commit messages, and honest documentation.

If you see something that breaks any of the above, please tell us.

---

## 2. What You Should Report

You do **not** need to be a senior C++ developer or a long-time contributor. If something feels wrong, it probably is worth reporting.

### 2.1 Code and Technical Issues

- **Incorrect or misleading examples** — code that teaches a wrong concept, uses undefined behavior, or produces output different from what the comments claim.
- **Code that does not compile** — with the supported compilers (GCC 14+, Clang 18+, C++17 or later).
- **Unsafe code** — buffer overflows, use-after-free, memory leaks, data races, uninitialized reads, or examples that would be dangerous if copied into a real program.
- **Outdated or non-idiomatic C++** — code that contradicts modern C++17/C++23 practice without explanation.
- **Broken links or missing files** referenced in the README, comments, or lesson numbering (e.g., a folder `05_...` that is missing while `04_` and `06_` exist).
- **License or attribution problems** — e.g., code copied from elsewhere without permission, or that conflicts with the Unlicense.

### 2.2 Style and Consistency

- Violations of the documented code style (spacing, `camelCase` / `PascalCase`, brace placement, English-only identifiers and comments).
- Nonsensical, unreadable, or non-English commit messages such as `asd`, `idk`, or `stuff`.
- Missing explanations for new or non-obvious concepts.

### 2.3 Behavioral and Community Issues

- **Harassment, discrimination, or personal attacks** in issues, pull requests, commit messages, or comments.
- **Spam, advertising, or self-promotion** unrelated to learning C++.
- **Trolling, bad-faith arguments, or deliberately disruptive behavior.**
- **Sharing someone else's private information** without consent.
- **Threats of violence or encouragement of self-harm.**

### 2.4 Security Issues

- Code that is intentionally malicious (e.g., exfiltrates data, opens backdoors, or harms the reader's machine).
- Vulnerabilities in any tooling, scripts, or CI configuration in the repository.
- Attempts to trick users into running unsafe commands.

> ⚠️ **Do not report security vulnerabilities in public issues.** See Section 4.3.

---

## 3. What You Should *Not* Report Here

To keep reports focused and actionable, the following do **not** belong in this repository's issue tracker:

- **Disagreements about C++ language design.** Take those to the appropriate standards forums.
- **Requests for help with your own code** that is unrelated to the examples here. Use a Q&A site like Stack Overflow.
- **Feature requests** for new lessons. Those are welcome — but please open them as a normal issue or pull request, not as a report.
- **Minor typos that you can fix yourself.** Just open a pull request; no report needed.
- **Third-party content** you found elsewhere. Report it to the platform hosting it first.

---

## 4. How to Report

### 4.1 For Code, Style, and Content Issues

1. **Search first.** Check the [existing issues](https://github.com/dryfish09/CppCodeExample/issues) to avoid duplicates.
2. **Open a new issue** with a clear, descriptive title.
3. **Include the following information:**
   - **File and line** (or folder) affected, e.g., `src/03_Loops/03_while.cpp:42`.
   - **What is wrong** — a short, factual description.
   - **Why it matters** — e.g., "This example has undefined behavior when `n == 0`."
   - **Expected vs. actual behavior**, if applicable.
   - **Compiler and standard used** (e.g., `g++ 14.2 -std=c++23`).
   - **Suggested fix**, if you have one. This is optional but very helpful.
4. **Attach evidence** where useful — a screenshot, a minimal reproduction, or a link to a compiler explorer snippet.

### 4.2 For Behavioral and Community Issues

1. **Do not engage the person directly** in the thread if the situation is heated.
2. **Contact the maintainer privately** via the email listed on the [maintainer's GitHub profile](https://github.com/dryfish09), or open a **confidential issue** if the platform supports it.
3. **Include:**
   - Where and when it happened (issue number, PR, commit SHA, date).
   - What was said or done, quoted accurately.
   - Any relevant screenshots or links.
   - Whether you have already tried to resolve it directly.
4. **Do not publicize** the report before the maintainer has had a chance to respond.

### 4.3 For Security Issues

1. **Do not open a public issue.**
2. **Email the maintainer privately** using the contact information on their GitHub profile, with the subject line `[SECURITY] CppCodeExample`.
3. **Include:**
   - A description of the vulnerability.
   - Steps to reproduce.
   - Potential impact.
   - Any suggested mitigation.
4. You will receive an acknowledgement as soon as reasonably possible. Please allow time for a fix before disclosing publicly.

### 4.4 What Makes a Good Report

- **Specific** — points to exact files, lines, or messages.
- **Factual** — describes what happened, not who is to blame.
- **Reproducible** — someone else can verify it.
- **Respectful** — assumes good faith until proven otherwise.
- **Actionable** — suggests, where possible, what could be changed.

---

## 5. What Happens After You Report

1. **Acknowledgement.** The maintainer will try to acknowledge your report within a reasonable time. This is a volunteer project, so please be patient.
2. **Review.** The report will be checked for accuracy and scope.
3. **Action.** Depending on the outcome, the maintainer may:
   - Fix the issue directly.
   - Ask you to submit a pull request.
   - Ask for more information.
   - Close the report with an explanation if no action is needed.
4. **Confidentiality.** Reports about behavior or security will be handled privately. Public issues may be locked or hidden if they contain sensitive information.
5. **Appeals.** If you disagree with the resolution, you may reply politely with new information. Repeated, unfounded appeals may be treated as disruption.

---

## 6. Responsibilities of Reporters

- **Report in good faith.** Do not file reports to harass, retaliate, or silence others.
- **Do not exaggerate.** Misrepresenting an issue wastes the maintainer's time and undermines trust.
- **Respect privacy.** Do not publish private conversations, emails, or personal data.
- **Be patient.** This is a learning project maintained by volunteers.
- **Follow up if asked.** If more information is needed, respond within a reasonable time.

---

## 7. Responsibilities of the Maintainer

- **Take every report seriously**, regardless of who files it.
- **Avoid conflicts of interest.** If the maintainer is the subject of a report, they should recuse themselves from deciding the outcome and, where possible, involve a neutral third party.
- **Be transparent** about decisions, within the limits of privacy.
- **Do not retaliate** against reporters.

---

## 8. Scope

These guidelines apply to:

- Issues and pull requests in this repository.
- Commit messages and code comments.
- Any official communication channel associated with the project.
- Interactions between contributors that arise from the project.

They do **not** apply to unrelated spaces.

---

## 9. Updates

These guidelines may be revised as the project grows. Significant changes will be noted in the repository history. Continued participation after a change constitutes acceptance of the updated guidelines.

---

Thank you for helping make CppCodeExample a better place to learn C++.
