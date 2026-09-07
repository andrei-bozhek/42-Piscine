# ex03 - SSH me!

[Subject PDF](../Shell00_subject.pdf)

## Task

Create an Ed25519 SSH key, submit the public key as `id_ed25519_pub`, and register the same public key in the 42 intranet.

## Submission

| Requirement | Value |
|---|---|
| Turn-in directory | `ex03/` |
| File to turn in | `id_ed25519_pub` |
| Allowed functions | None |

## How it was done

The key pair is generated with `ssh-keygen -t ed25519`. Only the public `.pub` key is copied to `id_ed25519_pub` and registered in the intranet; the private key is never submitted or shared. Because SSH keys are account- and machine-specific, no replacement key is published here.
