package main

import "fmt"

const p = `
func main() {
	fmt.Printf("package main\nimport \"fmt\"\nconst p = \"")
	for _, c := range p {
		fmt.Printf("\\x%02x", c)
	}
	fmt.Printf("\"%v",p)
}`

func main() {
	fmt.Printf("package main\nimport \"fmt\"\nconst p = \"")
	for _, c := range p {
		fmt.Printf("\\x%02x", c)
	}
	fmt.Printf("\"%v", p)
}
