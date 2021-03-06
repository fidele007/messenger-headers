/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBMemIcon, UIImage, FBMemGroup, NSArray, FBMemGroupPurpose;

@interface FBGroupMutationInfo : NSObject {

	NSString* fbid;
	NSString* name;
	NSString* description;
	FBMemIcon* icon;
	UIImage* coverPhoto;
	UIImage* uncroppedCoverPhoto;
	NSString* privacySetting;
	FBMemGroup* parentGroup;
	NSArray* selectedMembers;
	FBMemGroupPurpose* groupPurpose;
	NSString* _coverPhotoSearchServiceProvider;
	NSString* _coverPhotoSearchResultId;
	NSArray* _selectedEmails;

}

@property (nonatomic,copy) NSString * fbid; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * description; 
@property (nonatomic,copy) FBMemIcon * icon; 
@property (nonatomic,copy) UIImage * coverPhoto; 
@property (nonatomic,copy) UIImage * uncroppedCoverPhoto; 
@property (nonatomic,copy) NSString * coverPhotoSearchServiceProvider;              //@synthesize coverPhotoSearchServiceProvider=_coverPhotoSearchServiceProvider - In the implementation block
@property (nonatomic,copy) NSString * coverPhotoSearchResultId;                     //@synthesize coverPhotoSearchResultId=_coverPhotoSearchResultId - In the implementation block
@property (nonatomic,copy) NSString * privacySetting; 
@property (nonatomic,copy) FBMemGroup * parentGroup; 
@property (nonatomic,copy) FBMemGroupPurpose * groupPurpose; 
@property (nonatomic,copy) NSArray * selectedMembers; 
@property (nonatomic,copy) NSArray * selectedEmails;                                //@synthesize selectedEmails=_selectedEmails - In the implementation block
-(NSString *)fbid;
-(UIImage *)coverPhoto;
-(void)setFbid:(NSString *)arg1 ;
-(void)setCoverPhoto:(UIImage *)arg1 ;
-(UIImage *)uncroppedCoverPhoto;
-(void)setUncroppedCoverPhoto:(UIImage *)arg1 ;
-(NSArray *)selectedMembers;
-(void)setSelectedMembers:(NSArray *)arg1 ;
-(FBMemGroupPurpose *)groupPurpose;
-(void)setGroupPurpose:(FBMemGroupPurpose *)arg1 ;
-(NSString *)coverPhotoSearchServiceProvider;
-(void)setCoverPhotoSearchServiceProvider:(NSString *)arg1 ;
-(NSString *)coverPhotoSearchResultId;
-(void)setCoverPhotoSearchResultId:(NSString *)arg1 ;
-(NSArray *)selectedEmails;
-(void)setSelectedEmails:(NSArray *)arg1 ;
-(id)init;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setIcon:(FBMemIcon *)arg1 ;
-(FBMemIcon *)icon;
-(void)setDescription:(NSString *)arg1 ;
-(void)setParentGroup:(FBMemGroup *)arg1 ;
-(FBMemGroup *)parentGroup;
-(NSString *)privacySetting;
-(void)setPrivacySetting:(NSString *)arg1 ;
@end

