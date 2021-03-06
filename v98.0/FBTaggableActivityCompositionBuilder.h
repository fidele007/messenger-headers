/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, FBActivityPreviewTemplate, FBTaggableActivityEventObject, FBTypedNSArrayOfFBActivityIcon, FBMemPlaceFlowInfo;

@interface FBTaggableActivityCompositionBuilder : NSObject {

	NSString* _graphQLID;
	NSString* _presentParticiple;
	NSString* _taggableActivityID;
	NSString* _objectID;
	NSString* _iconID;
	NSString* _freeformObjectName;
	NSString* _objectLabel;
	NSString* _objectSubtext;
	NSString* _suggestionMechanism;
	NSURL* _smallIconURL;
	NSURL* _largeIconURL;
	NSURL* _profilePictureURL;
	NSURL* _glyphURL;
	BOOL _showAttachmentPreview;
	BOOL _hideAttachment;
	BOOL _shouldCreateProfileBadge;
	FBActivityPreviewTemplate* _previewTemplate;
	FBActivityPreviewTemplate* _previewTemplateWithUser;
	FBActivityPreviewTemplate* _previewTemplateWithMultipleUsers;
	FBActivityPreviewTemplate* _previewTemplateWithUserAtPlace;
	FBActivityPreviewTemplate* _previewTemplateWithMultipleUsersAtPlace;
	FBActivityPreviewTemplate* _previewTemplateAtPlace;
	FBTaggableActivityEventObject* _eventObject;
	FBTypedNSArrayOfFBActivityIcon* _allIcons;
	FBTypedNSArrayOfFBActivityIcon* _objectIcons;
	FBMemPlaceFlowInfo* _associatedPlacesInfo;
	BOOL _hasCustomIcon;
	BOOL _isSelected;

}
+(id)taggableActivityComposition;
+(id)taggableActivityCompositionFromExistingTaggableActivityComposition:(id)arg1 ;
-(id)withGraphQLID:(id)arg1 ;
-(id)withPresentParticiple:(id)arg1 ;
-(id)withTaggableActivityID:(id)arg1 ;
-(id)withObjectID:(id)arg1 ;
-(id)withIconID:(id)arg1 ;
-(id)withFreeformObjectName:(id)arg1 ;
-(id)withObjectLabel:(id)arg1 ;
-(id)withObjectSubtext:(id)arg1 ;
-(id)withSuggestionMechanism:(id)arg1 ;
-(id)withSmallIconURL:(id)arg1 ;
-(id)withLargeIconURL:(id)arg1 ;
-(id)withProfilePictureURL:(id)arg1 ;
-(id)withGlyphURL:(id)arg1 ;
-(id)withShowAttachmentPreview:(BOOL)arg1 ;
-(id)withHideAttachment:(BOOL)arg1 ;
-(id)withShouldCreateProfileBadge:(BOOL)arg1 ;
-(id)withPreviewTemplate:(id)arg1 ;
-(id)withPreviewTemplateWithUser:(id)arg1 ;
-(id)withPreviewTemplateWithMultipleUsers:(id)arg1 ;
-(id)withPreviewTemplateWithUserAtPlace:(id)arg1 ;
-(id)withPreviewTemplateWithMultipleUsersAtPlace:(id)arg1 ;
-(id)withPreviewTemplateAtPlace:(id)arg1 ;
-(id)withEventObject:(id)arg1 ;
-(id)withAllIcons:(id)arg1 ;
-(id)withObjectIcons:(id)arg1 ;
-(id)withAssociatedPlacesInfo:(id)arg1 ;
-(id)withHasCustomIcon:(BOOL)arg1 ;
-(id)withIsSelected:(BOOL)arg1 ;
-(id)build;
@end

