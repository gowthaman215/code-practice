#!/bin/bash
Recipient="gowthaman215@gmail.com"
Subject="Hello Gowthaman"
Message="This is a test message sent via mail tool on gnu linux"
`mail -s $Subject $Recipient <<< $Message`
