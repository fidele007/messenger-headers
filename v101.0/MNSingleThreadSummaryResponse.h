/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMThreadSummary, NSError;

@interface MNSingleThreadSummaryResponse : NSObject <NSCopying> {

	unsigned long long _subtype;
	FBMThreadSummary* _threadFetched_threadSummary;
	NSError* _fetchingFailed_error;

}
+(id)threadNotCreated;
+(id)threadFetchedWithThreadSummary:(id)arg1 ;
+(id)fetchingFailedWithError:(id)arg1 ;
-(void)matchThreadFetched:(/*^block*/id)arg1 threadNotCreated:(/*^block*/id)arg2 fetchingFailed:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

