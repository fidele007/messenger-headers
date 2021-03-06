/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet;

@interface MNThreadListNetworkFetchParsedResult : FBValueObject <NSCopying> {

	BOOL _didReachEndOfThreadList;
	NSSet* _individualNetworkFetchParsedResults;
	long long _threadListType;

}

@property (nonatomic,copy,readonly) NSSet * individualNetworkFetchParsedResults;              //@synthesize individualNetworkFetchParsedResults=_individualNetworkFetchParsedResults - In the implementation block
@property (nonatomic,readonly) BOOL didReachEndOfThreadList;                                  //@synthesize didReachEndOfThreadList=_didReachEndOfThreadList - In the implementation block
@property (nonatomic,readonly) long long threadListType;                                      //@synthesize threadListType=_threadListType - In the implementation block
-(BOOL)didReachEndOfThreadList;
-(long long)threadListType;
-(NSSet *)individualNetworkFetchParsedResults;
-(id)initWithIndividualNetworkFetchParsedResults:(id)arg1 didReachEndOfThreadList:(BOOL)arg2 threadListType:(long long)arg3 ;
@end

