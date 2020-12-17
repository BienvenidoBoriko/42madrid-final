find . -type f -name "*.sh" | awk -F. '{print $2}' | awk -F/ '{print $2}' | tr -d '\n'
