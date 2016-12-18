/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MNProfileImageModel;

@interface MNJoinableGroupActionHeaderViewModel : FBValueObject <NSCopying> {

	NSString* _groupTitle;
	NSString* _activeTitle;
	NSString* _memberCountTitle;
	MNProfileImageModel* _profileImageModel;

}

@property (nonatomic,copy,readonly) NSString * groupTitle;                                //@synthesize groupTitle=_groupTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * activeTitle;                               //@synthesize activeTitle=_activeTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * memberCountTitle;                          //@synthesize memberCountTitle=_memberCountTitle - In the implementation block
@property (nonatomic,copy,readonly) MNProfileImageModel * profileImageModel;              //@synthesize profileImageModel=_profileImageModel - In the implementation block
-(MNProfileImageModel *)profileImageModel;
-(NSString *)activeTitle;
-(NSString *)memberCountTitle;
-(id)initWithGroupTitle:(id)arg1 activeTitle:(id)arg2 memberCountTitle:(id)arg3 profileImageModel:(id)arg4 ;
-(NSString *)groupTitle;
@end
