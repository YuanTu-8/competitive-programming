#!/bin/bash
mkdir -p "$1"

cat > "$1/tsconfig.json" << 'EOF'
{
  "compilerOptions": {
    "strict": true,
    "lib": ["ES2022", "DOM"]
  }
}
EOF

touch "$1/main.ts"
touch "$1/readme.md"

echo "Created $1/"
