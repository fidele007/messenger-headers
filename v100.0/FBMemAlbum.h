/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBWildeMemModelObject.h>
#import <Messenger/FBMediaContainerProtocol.h>
#import <Messenger/FBShareable.h>
#import <Messenger/FBFeedbackTargetProtocol.h>
#import <Messenger/FBQueriedEntityFieldsProtocol.h>
#import <Messenger/FBQueriedMediaSetFieldsProtocol.h>
#import <Messenger/FBQueriedNodeFieldsProtocol.h>

@class FBMemPhoto, NSString, NSNumber, NSDate;

@interface FBMemAlbum : FBWildeMemModelObject <FBMediaContainerProtocol, FBShareable, FBFeedbackTargetProtocol, FBQueriedEntityFieldsProtocol, FBQueriedMediaSetFieldsProtocol, FBQueriedNodeFieldsProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) FBMemPhoto * mediaContainerCoverPhoto; 
@property (nonatomic,copy,readonly) NSString * mediaContainerName; 
@property (nonatomic,copy,readonly) NSNumber * size; 
@property (nonatomic,readonly) NSDate * modifiedTime; 
@property (nonatomic,copy,readonly) NSNumber * canViewerEdit; 
@property (nonatomic,copy,readonly) NSString * graphQLID; 
+(void)setShouldAllowInlineSpecialAlbums:(BOOL)arg1 ;
-(id)fbid;
-(id)shareableID;
-(id)shareableURL;
-(void)taggableSourceAvatarWithSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)shareableType;
-(id)shareableText;
-(id)shareableTitle;
-(id)shareableSubtitle;
-(id)shareableDescription;
-(id)shareableImageURL;
-(id)shareableImage;
-(id)entityURL;
-(NSNumber *)canViewerEdit;
-(FBMemPhoto *)mediaContainerCoverPhoto;
-(BOOL)userWithIDCanUploadToAlbum:(id)arg1 session:(id)arg2 ;
-(id)titleForContainerForSession:(id)arg1 ;
-(id)coverPhotoForContainerForSession:(id)arg1 ;
-(NSString *)mediaContainerName;
-(NSNumber *)size;
@end

