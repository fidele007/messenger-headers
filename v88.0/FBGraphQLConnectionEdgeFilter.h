/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBGraphQLConnectionStoreEdgeFiltering;
@interface FBGraphQLConnectionEdgeFilter : NSObject {

	id<FBGraphQLConnectionStoreEdgeFiltering> _filter;
	long long _priority;

}

@property (nonatomic,readonly) id<FBGraphQLConnectionStoreEdgeFiltering> filter;              //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) long long priority;                                            //@synthesize priority=_priority - In the implementation block
-(id)initWithFilter:(id)arg1 priority:(long long)arg2 ;
-(long long)priority;
-(id<FBGraphQLConnectionStoreEdgeFiltering>)filter;
@end

