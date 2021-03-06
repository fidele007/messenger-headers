/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBStringWithRedactedDescription, MNProfileImageModel;

@interface MNGroupsRoomNullStateViewModel : FBValueObject <NSCopying> {

	BOOL _isViewerAdmin;
	FBStringWithRedactedDescription* _groupName;
	MNProfileImageModel* _profileImageModel;

}

@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * groupName;              //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,copy,readonly) MNProfileImageModel * profileImageModel;                  //@synthesize profileImageModel=_profileImageModel - In the implementation block
@property (nonatomic,readonly) BOOL isViewerAdmin;                                            //@synthesize isViewerAdmin=_isViewerAdmin - In the implementation block
-(MNProfileImageModel *)profileImageModel;
-(id)initWithGroupName:(id)arg1 profileImageModel:(id)arg2 isViewerAdmin:(BOOL)arg3 ;
-(BOOL)isViewerAdmin;
-(FBStringWithRedactedDescription *)groupName;
@end

