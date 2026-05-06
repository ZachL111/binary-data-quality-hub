# binary-data-quality-hub

`binary-data-quality-hub` explores data engineering in C++. The repository keeps the core rule set compact, then surrounds it with examples that show how the decisions move.

## Binary Data Quality Hub Notes

The quickest review path is the verifier first, then the fixtures, then the operations note. That order makes it easy to see whether the code, data, and explanation still agree.

## Why This Exists

This is not a wrapper around a service. It is a self-contained project that shows how the model behaves when demand, capacity, latency, risk, and weight move in different directions.

## Code Tour

- `src`: primary implementation
- `tests`: verification harness
- `fixtures`: compact golden scenarios
- `examples`: expanded scenario set
- `metadata`: project constants and verification metadata
- `docs`: operations and extension notes
- `scripts`: local verification and audit commands

## Feature Notes

- Includes extended examples for pipeline state, including `recovery` and `degraded`.
- Documents quality gates tradeoffs in `docs/operations.md`.
- Runs locally with a single verification command and no external credentials.
- Stores project constants and verification metadata in `metadata/project.json`.
- Adds a repository audit script that checks structure before running the language verifier.

## Implementation Notes

The interesting part is the boundary between accepted and reviewed scenarios. Extended examples sit near that boundary so future edits can show whether the model became more permissive or more cautious. The C++ project uses a small library boundary and a compiled assertion harness.

## Local Setup

Use a normal shell with C++ available on `PATH`. The verifier is written as a PowerShell script because the portfolio was assembled on Windows.

## Example Scenarios

The extended cases are not random smoke tests. `degraded` keeps pressure on the review path, while `recovery` shows the model when capacity and weight are strong enough to clear the threshold.

## Try It

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

This runs the language-level build or test path against the compact fixture set.

## Tests

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/audit.ps1
```

The audit command checks repository structure and README constraints before it delegates to the verifier.

## Roadmap

- Split the scoring constants into a typed configuration object and validate it before use.
- Add a comparison mode that shows how decisions change when one signal is adjusted.
- Add a loader for `examples/extended_cases.csv` and promote selected cases into the language test suite.
- Add one more data engineering fixture that focuses on a malformed or borderline input.

## Boundaries

This code is local-first. It makes no claim about deployed usage and avoids credentials, hosted state, and environment-specific setup.
