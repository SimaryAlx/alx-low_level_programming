HashTable.prototype.get = function(key) {    
    var value = null
    this.storage.forEach((kvpair) => {
            if (kvpair.key) {
              value = kvpair.key;
            }
        })
    return value;
    };
