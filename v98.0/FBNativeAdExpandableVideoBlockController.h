/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBExpandableVideoBlockController.h>
#import <Messenger/FBNativeAdVideoCTAButtonNodeDelegate.h>

@protocol FBQueriedDocumentNativeAdBaseObjectFieldsProtocol;
@class FBUserSession, FBMemModelObject, FBRichStoryBlockDisplayContext, FBNativeArticleNativeAdIntentHandler, NSString, NSMutableDictionary, FBNativeAdVideoCTAButtonNode;

@interface FBNativeAdExpandableVideoBlockController : FBExpandableVideoBlockController <FBNativeAdVideoCTAButtonNodeDelegate> {

	FBUserSession* _session;
	FBMemModelObject*<FBQueriedDocumentNativeAdBaseObjectFieldsProtocol> _nativeAdObject;
	FBRichStoryBlockDisplayContext* _displayContext;
	FBNativeArticleNativeAdIntentHandler* _intentHandler;
	NSString* _articleID;
	NSMutableDictionary* _perfAnalyticsInfo;
	double _adContentLoadingStartTime;
	BOOL _videoContentDisplayed;
	BOOL _needsToFirePerfEvent;
	mutex _asyncMutex;
	FBNativeAdVideoCTAButtonNode* _videoCTAButton;

}

@property (nonatomic,retain) FBNativeAdVideoCTAButtonNode * videoCTAButton;              //@synthesize videoCTAButton=_videoCTAButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)layoutForStoryBlock:(id)arg1 constrainingSize:(CGSize)arg2 presentationAttributes:(id)arg3 displayContext:(id)arg4 ;
+(BOOL)blockControllerCanRenderStoryBlock:(id)arg1 presentationAttributes:(id)arg2 ;
+(id)blockControllerForStoryBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 ;
+(id)annotationDictionaryForBlock:(id)arg1 presentationAttributes:(id)arg2 displayContext:(id)arg3 ;
+(id)landscapeAnnotationsFromAnnotations:(id)arg1 ;
+(id)blockControllerClassesForAnnotationRegistry;
+(id)annotationDictionaryForExpandableBlock:(id)arg1 presentationAttributes:(id)arg2 displayContext:(id)arg3 ;
+(id)richStoryVideoEntityForStoryBlock:(id)arg1 presentationAttributes:(id)arg2 ;
+(id)_perfAnalyticsInfoForPresentationAttributes:(id)arg1 ;
+(double)_adContentLoadingStartTimeForPresentationAttributes:(id)arg1 ;
+(BOOL)_needsToLogImpressionForPresentationAttributes:(id)arg1 ;
+(BOOL)_shouldEnableSponsoredHeaderForPresentationAttributes:(id)arg1 ;
+(id)richStoryVideoEntityForNativeAdObject:(id)arg1 ;
-(void)handleIntent:(id)arg1 ;
-(void)didReceiveFocusWithInteraction:(unsigned long long)arg1 ;
-(void)didGainInteractiveFocus;
-(void)didLoseInteractiveFocus;
-(BOOL)wantsCentermostFocus;
-(void)didGainCentermostFocus;
-(void)didLoseCentermostFocus;
-(id)renderableForOverlayAnnotation:(id)arg1 withKey:(id)arg2 annotationController:(id)arg3 ;
-(id)expandedOnlyAnnotations;
-(void)videoNodeDidDisplayPreviewImage:(id)arg1 ;
-(id)interactiveMediaNodeController;
-(id)initWithBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 reachabilityAnnouncer:(id)arg5 videoLoggingDataProvider:(id)arg6 ;
-(BOOL)shouldAlwaysMuteInlineVideos;
-(BOOL)needsToFirePerfEvent;
-(void)setNeedsToFirePerfEvent:(BOOL)arg1 ;
-(void)_cleanupNativeAdPerfAnalyticValues;
-(void)_logNativeAdPerfAnalytics;
-(BOOL)isVideoContentDisplayed;
-(id)renderableForVideoCTAAnnotationBlock:(id)arg1 ;
-(void)setVideoContentDisplayed:(BOOL)arg1 ;
-(void)didTapVideoCTAButton:(id)arg1 ;
-(FBNativeAdVideoCTAButtonNode *)videoCTAButton;
-(void)setVideoCTAButton:(FBNativeAdVideoCTAButtonNode *)arg1 ;
@end
