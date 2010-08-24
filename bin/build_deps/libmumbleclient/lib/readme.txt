Builded from sources: http://github.com/pcgod/libmumbleclient (April 08, 2010, last commit: 13c84b45c973f686eb2a)
+ FIX: added: 'io_service_.reset()'
+ FIX: convert: 'exit(1);' -> 'throw std::exception(error.message().c_str());'
+ FIX: ignore assert failure + null pointer check -> in RemoveUser handler 

TODO: Clean and send pathces to upstream!
      Until this is done the modified sources can be found at

      http://github.com/mattiku/libmumbleclient