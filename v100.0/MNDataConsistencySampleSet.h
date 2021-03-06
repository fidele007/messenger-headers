/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNDataConsistencySnapshotDataset;

@interface MNDataConsistencySampleSet : FBValueObject <NSCopying> {

	MNDataConsistencySnapshotDataset* _clientSnapshot;
	MNDataConsistencySnapshotDataset* _serverSnapshot;

}

@property (nonatomic,copy,readonly) MNDataConsistencySnapshotDataset * clientSnapshot;              //@synthesize clientSnapshot=_clientSnapshot - In the implementation block
@property (nonatomic,copy,readonly) MNDataConsistencySnapshotDataset * serverSnapshot;              //@synthesize serverSnapshot=_serverSnapshot - In the implementation block
-(id)initWithClientSnapshot:(id)arg1 serverSnapshot:(id)arg2 ;
-(MNDataConsistencySnapshotDataset *)clientSnapshot;
-(MNDataConsistencySnapshotDataset *)serverSnapshot;
@end

