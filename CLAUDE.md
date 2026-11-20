# Orre

Free fan-game demake of Pokémon Colosseum, built on pokeemerald-expansion.

## Conventions
- Work on feature branches (feature/<system>); never commit straight to master.
- All Orre tuning values live in include/config/orre.h.
- New systems go in their own files (e.g. src/shadow.c, src/befriend.c).
- Keep edits to upstream files small and mark them with an `// ORRE` comment.
- Run `make` after every change; use `make check` for battle tests.
- No Claude attribution in commits or PRs.

## Core rules
- Wild Pokémon are "guarded": can be befriended, never snagged.
- Shadows are "sealed": can only be snagged (needs the Snag Machine flag), never befriended.
- Trainer battles are doubles; wild battles are singles.