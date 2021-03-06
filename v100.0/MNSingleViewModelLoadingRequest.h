/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNViewModelElementKey, MNViewModelUpdateType;

@interface MNSingleViewModelLoadingRequest : NSObject <NSCopying> {

	MNViewModelElementKey* _key;
	MNViewModelUpdateType* _updateType;
	/*^block*/id _successBlock;
	/*^block*/id _progressBlock;
	/*^block*/id _failureBlock;

}

@property (nonatomic,copy,readonly) MNViewModelElementKey * key;                     //@synthesize key=_key - In the implementation block
@property (nonatomic,copy,readonly) MNViewModelUpdateType * updateType;              //@synthesize updateType=_updateType - In the implementation block
@property (nonatomic,readonly) id successBlock;                                      //@synthesize successBlock=_successBlock - In the implementation block
@property (nonatomic,readonly) id progressBlock;                                     //@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,readonly) id failureBlock;                                      //@synthesize failureBlock=_failureBlock - In the implementation block
-(id)successBlock;
-(id)initWithKey:(id)arg1 updateType:(id)arg2 successBlock:(/*^block*/id)arg3 progressBlock:(/*^block*/id)arg4 failureBlock:(/*^block*/id)arg5 ;
-(id)description;
-(MNViewModelElementKey *)key;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)progressBlock;
-(MNViewModelUpdateType *)updateType;
-(id)failureBlock;
@end

