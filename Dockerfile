# ❌ BAD: using a huge base image unnecessarily
FROM ubuntu:20.04

# ❌ BAD: not setting a working directory, everything in root
# ❌ BAD: missing non-interactive flag in apt-get (can hang)
RUN apt-get update && apt-get install -y python3 python3-pip

# ❌ BAD: copy everything (including .git, __pycache__, node_modules, etc.)
COPY . /

# ❌ BAD: install requirements after copying whole context, no caching benefit
RUN pip3 install -r requirements.txt

# ❌ BAD: runs as root (default), no USER instruction
# ❌ BAD: exposing too many ports
EXPOSE 22 80 443 8000 9000

# ❌ BAD: CMD using shell form, harder to override
CMD python3 app.py

