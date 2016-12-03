/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:07 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBIntentTarget.h>

@class NSString, FBMemPhoto;

@interface FBPhotoIntentTarget : FBIntentTarget {

	NSString* _FBID;

}

@property (nonatomic,readonly) FBMemPhoto * photo; 
@property (nonatomic,copy,readonly) NSString * FBID;              //@synthesize FBID=_FBID - In the implementation block
+(id)photoTargetWithFBID:(id)arg1 ;
+(id)photoTargetWithDataSource:(id)arg1 startingPhotoIndex:(unsigned long long)arg2 referrer:(id)arg3 options:(FBPhotoIntentOptions)arg4 ;
+(id)photoTargetWithPhoto:(id)arg1 ;
-(id)fallbackURLs;
-(NSString *)FBID;
-(BOOL)captionAlwaysShowHeader;
-(id)photoCollectionDataSource;
-(unsigned long long)startingPhotoIndex;
-(id)photoViewProvider;
-(id)privacyController;
-(id)addLocationController;
-(BOOL)showTagsImmediately;
-(BOOL)enableTagGuide;
-(id)tagGuideDelegate;
-(BOOL)showDismissalControlsImmediately;
-(BOOL)showCommentsOnAppear;
-(id)focusedCommentID;
-(id)focusedReplyID;
-(id)customButtonProvider;
-(id)lifecycleListener;
-(BOOL)enableScrollBackToFeedDismissal;
-(id)photoOverlayProvider;
-(BOOL)showInspirationHeader;
-(id)referrer;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(FBMemPhoto *)photo;
@end

