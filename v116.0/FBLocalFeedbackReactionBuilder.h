/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:56 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIColor, UIImage, KFVector, FBDelightsAnimation;

@interface FBLocalFeedbackReactionBuilder : NSObject {

	long long _key;
	NSString* _localizedName;
	NSString* _apiName;
	UIColor* _color;
	UIImage* _faceImage16;
	UIImage* _stackedFaceImage16;
	NSString* _faceImage16VersionName;
	UIImage* _faceImage24;
	UIImage* _faceImageWithTransparentBorder24;
	UIImage* _faceImageWithWhiteBorder24;
	UIImage* _stackedFaceImage24;
	NSString* _faceImage24VersionName;
	UIImage* _faceImage32;
	NSString* _faceImage32VersionName;
	UIImage* _faceImage64;
	NSString* _faceImage64VersionName;
	KFVector* _inputFaceModel;
	NSString* _inputFaceModelVersionName;
	FBDelightsAnimation* _sentAnimation;
	NSString* _sentAnimationVersionName;
	FBDelightsAnimation* _receivedAnimation;
	NSString* _receivedAnimationVersionName;

}
+(id)localFeedbackReaction;
+(id)localFeedbackReactionFromExistingLocalFeedbackReaction:(id)arg1 ;
-(id)withKey:(long long)arg1 ;
-(id)withLocalizedName:(id)arg1 ;
-(id)withApiName:(id)arg1 ;
-(id)withColor:(id)arg1 ;
-(id)withFaceImage16:(id)arg1 ;
-(id)withStackedFaceImage16:(id)arg1 ;
-(id)withFaceImage16VersionName:(id)arg1 ;
-(id)withFaceImage24:(id)arg1 ;
-(id)withFaceImageWithTransparentBorder24:(id)arg1 ;
-(id)withFaceImageWithWhiteBorder24:(id)arg1 ;
-(id)withStackedFaceImage24:(id)arg1 ;
-(id)withFaceImage24VersionName:(id)arg1 ;
-(id)withFaceImage32:(id)arg1 ;
-(id)withFaceImage32VersionName:(id)arg1 ;
-(id)withFaceImage64:(id)arg1 ;
-(id)withFaceImage64VersionName:(id)arg1 ;
-(id)withInputFaceModel:(id)arg1 ;
-(id)withInputFaceModelVersionName:(id)arg1 ;
-(id)withSentAnimation:(id)arg1 ;
-(id)withSentAnimationVersionName:(id)arg1 ;
-(id)withReceivedAnimation:(id)arg1 ;
-(id)withReceivedAnimationVersionName:(id)arg1 ;
-(id)build;
@end

