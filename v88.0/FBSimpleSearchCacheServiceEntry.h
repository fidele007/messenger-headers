/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBSimpleSearchServerSuggestionCache, NSPointerArray;

@interface FBSimpleSearchCacheServiceEntry : NSObject {

	FBSimpleSearchServerSuggestionCache* _cache;
	NSPointerArray* _references;

}

@property (nonatomic,readonly) FBSimpleSearchServerSuggestionCache * cache;              //@synthesize cache=_cache - In the implementation block
@property (nonatomic,readonly) NSPointerArray * references;                              //@synthesize references=_references - In the implementation block
-(id)initWithCache:(id)arg1 references:(id)arg2 ;
-(FBSimpleSearchServerSuggestionCache *)cache;
-(NSPointerArray *)references;
@end

