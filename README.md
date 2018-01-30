# steampipe_storeid
A simple hardcoded squid storeid helper for deduplicating cache objects for the steampipe cdn

reads urls from stdin and outputs store_ids

## Building
The usual: hit 'make' or 'make install', your gcc version should support c++11/\<regex\>

## Usage
* add it to your squid config via store_id_program (see example.conf)
* make sure to use a proper acl and have 'concurrency=0', there are no checks implemented
