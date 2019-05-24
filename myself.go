package main

import "fmt"

var p = `
func main() {
	fmt.Printf("package main\nimport \"fmt\"\nvar p = \"")
	for i := 0; i < len(p); i++ {
		fmt.Printf("\\x%02x", p[i])
	}
	fmt.Printf("\"%v",p)
}`

func main() {
	fmt.Printf("package main\nimport \"fmt\"\nvar p = \"")
	for i := 0; i < len(p); i++ {
		fmt.Printf("\\x%02x", p[i])
	}
	fmt.Printf("\"%v", p)
}
