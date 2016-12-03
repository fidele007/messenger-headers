/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:11 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBWildeMemModelObject.h>
#import <Messenger/FBRichStoryEntityVideoProtocol.h>
#import <Messenger/FBDisplayableMedia.h>
#import <Messenger/FBFeedbackTargetProtocol.h>
#import <Messenger/FBShareable.h>
#import <Messenger/FBVideoProtocolHuman.h>
#import <Messenger/FBQueriedEntityFieldsProtocol.h>
#import <Messenger/FBQueriedMediaFieldsProtocol.h>
#import <Messenger/FBQueriedNodeFieldsProtocol.h>
#import <Messenger/FBQueriedProfileFieldsProtocol.h>
#import <Messenger/FBQueriedProfileOverlayableMediaFieldsProtocol.h>
#import <Messenger/FBQueriedSavableFieldsProtocol.h>
#import <Messenger/FBQueriedSearchCombinedResultFieldsProtocol.h>
#import <Messenger/FBQueriedSearchResultFieldsProtocol.h>

@class NSString;

@interface FBMemVideo : FBWildeMemModelObject <FBRichStoryEntityVideoProtocol, FBDisplayableMedia, FBFeedbackTargetProtocol, FBShareable, FBVideoProtocolHuman, FBQueriedEntityFieldsProtocol, FBQueriedMediaFieldsProtocol, FBQueriedNodeFieldsProtocol, FBQueriedProfileFieldsProtocol, FBQueriedProfileOverlayableMediaFieldsProtocol, FBQueriedSavableFieldsProtocol, FBQueriedSearchCombinedResultFieldsProtocol, FBQueriedSearchResultFieldsProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)fbid;
-(id)videoID;
-(id)shareableID;
-(id)shareableURL;
-(void)taggableSourceAvatarWithSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)mediaID;
-(id)mediaID;
-(id)hdURLString;
-(id)sdURLString;
-(BOOL)isSphericalVideo;
-(id)sphericalPlaybackURLString;
-(id)sphericalPlaybackURLHDString;
-(id)sphericalAttributes;
-(id)shareableType;
-(id)shareableText;
-(id)shareableTitle;
-(id)shareableSubtitle;
-(id)shareableDescription;
-(id)shareableImageURL;
-(id)shareableImage;
-(id)entityURL;
-(id)accessibilityLabelStringWithTitle:(id)arg1 includingCaption:(BOOL)arg2 ;
-(id)accessibilityLabelString;
-(id)defaultVideoTitle;
-(id)placeholderImage;
-(double)aspectRatio;
-(id)previewImage;
@end

