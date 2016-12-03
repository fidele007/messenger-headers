/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNBatchSecureAndSyncedThreadRequestBehavior : NSObject <NSCopying> {

	/*^block*/id _fetchedBlock;
	/*^block*/id _failureBlock;
	/*^block*/id _progressBlock;

}

@property (nonatomic,copy,readonly) id fetchedBlock;               //@synthesize fetchedBlock=_fetchedBlock - In the implementation block
@property (nonatomic,copy,readonly) id failureBlock;               //@synthesize failureBlock=_failureBlock - In the implementation block
@property (nonatomic,copy,readonly) id progressBlock;              //@synthesize progressBlock=_progressBlock - In the implementation block
-(id)initWithFetchedBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)fetchedBlock;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)progressBlock;
-(id)failureBlock;
@end

