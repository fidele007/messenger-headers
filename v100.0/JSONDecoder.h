/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:53 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface JSONDecoder : NSObject {

	JKParseState* parseState;

}
+(id)_fb_deepCopyObjectWithNullRemovedRecursive:(id)arg1 visitedNodes:(id)arg2 ;
+(id)_fb_deepCopyDictionaryWithNullRemovedRecursive:(id)arg1 andVisitedNodes:(id)arg2 ;
+(id)_fb_deepCopyArrayWithNullRemovedRecursive:(id)arg1 andVisitedNodes:(id)arg2 ;
+(id)fb_deepCopyObjectWithNullRemoved:(id)arg1 ;
+(id)decoderWithParseOptions:(unsigned long long)arg1 ;
+(id)decoder;
-(id)objectWithString:(id)arg1 error:(id*)arg2 ;
-(id)initWithParseOptions:(unsigned long long)arg1 ;
-(id)objectWithString:(id)arg1 ;
-(id)objectWithUTF8String:(const char*)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)mutableObjectWithUTF8String:(const char*)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)mutableObjectWithData:(id)arg1 error:(id*)arg2 ;
-(id)parseUTF8String:(const char*)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)parseJSONData:(id)arg1 ;
-(id)objectWithUTF8String:(const char*)arg1 length:(unsigned long long)arg2 ;
-(id)mutableObjectWithUTF8String:(const char*)arg1 length:(unsigned long long)arg2 ;
-(id)parseJSONData:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)init;
-(void)clearCache;
-(id)mutableObjectWithData:(id)arg1 ;
-(id)objectWithData:(id)arg1 ;
-(id)objectWithData:(id)arg1 error:(id*)arg2 ;
-(id)parseUTF8String:(const char*)arg1 length:(unsigned long long)arg2 ;
@end
