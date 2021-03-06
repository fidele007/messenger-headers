/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:56 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@class NSString;

@interface FBTimelineBookmarksExperimentContext : FBExperimentContext {

	BOOL _enableProfilePicEdit;
	BOOL _enableCardContextItems;
	BOOL _enableNewStyle;
	BOOL _enableShowViewProfile;
	BOOL _enableShowLastUpdateContent;
	BOOL _enableShowEditIcon;
	NSString* _viewProfileContent;

}

@property (nonatomic,readonly) BOOL enableProfilePicEdit;                       //@synthesize enableProfilePicEdit=_enableProfilePicEdit - In the implementation block
@property (nonatomic,readonly) BOOL enableCardContextItems;                     //@synthesize enableCardContextItems=_enableCardContextItems - In the implementation block
@property (nonatomic,readonly) BOOL enableNewStyle;                             //@synthesize enableNewStyle=_enableNewStyle - In the implementation block
@property (nonatomic,readonly) BOOL enableShowViewProfile;                      //@synthesize enableShowViewProfile=_enableShowViewProfile - In the implementation block
@property (nonatomic,readonly) BOOL enableShowLastUpdateContent;                //@synthesize enableShowLastUpdateContent=_enableShowLastUpdateContent - In the implementation block
@property (nonatomic,readonly) BOOL enableShowEditIcon;                         //@synthesize enableShowEditIcon=_enableShowEditIcon - In the implementation block
@property (nonatomic,copy,readonly) NSString * viewProfileContent;              //@synthesize viewProfileContent=_viewProfileContent - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(BOOL)enableProfilePicEdit;
-(BOOL)enableCardContextItems;
-(BOOL)enableNewStyle;
-(BOOL)enableShowViewProfile;
-(BOOL)enableShowLastUpdateContent;
-(BOOL)enableShowEditIcon;
-(NSString *)viewProfileContent;
@end

