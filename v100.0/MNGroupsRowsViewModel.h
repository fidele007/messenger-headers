/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, MNThreadClientUpdate;

@interface MNGroupsRowsViewModel : FBValueObject <NSCopying> {

	BOOL _didReachEndOfThreadList;
	unsigned long long _viewModelType;
	NSArray* _groupsRows;
	unsigned long long _timestampOfOldestVisibleThread;
	MNThreadClientUpdate* _lastAttemptedClientUpdate;

}

@property (nonatomic,readonly) unsigned long long viewModelType;                                   //@synthesize viewModelType=_viewModelType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * groupsRows;                                          //@synthesize groupsRows=_groupsRows - In the implementation block
@property (nonatomic,readonly) unsigned long long timestampOfOldestVisibleThread;                  //@synthesize timestampOfOldestVisibleThread=_timestampOfOldestVisibleThread - In the implementation block
@property (nonatomic,readonly) BOOL didReachEndOfThreadList;                                       //@synthesize didReachEndOfThreadList=_didReachEndOfThreadList - In the implementation block
@property (nonatomic,copy,readonly) MNThreadClientUpdate * lastAttemptedClientUpdate;              //@synthesize lastAttemptedClientUpdate=_lastAttemptedClientUpdate - In the implementation block
-(unsigned long long)viewModelType;
-(NSArray *)groupsRows;
-(BOOL)didReachEndOfThreadList;
-(MNThreadClientUpdate *)lastAttemptedClientUpdate;
-(unsigned long long)timestampOfOldestVisibleThread;
-(id)initWithViewModelType:(unsigned long long)arg1 groupsRows:(id)arg2 timestampOfOldestVisibleThread:(unsigned long long)arg3 didReachEndOfThreadList:(BOOL)arg4 lastAttemptedClientUpdate:(id)arg5 ;
@end

