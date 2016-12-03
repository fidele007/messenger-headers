/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBWebImageSpecifier;
@class FBWebImageFocusPointLayout;

@interface FBBurstAnimationImageViewImageSpecifier : NSObject {

	id<FBWebImageSpecifier> _webImageSpecifier;
	FBWebImageFocusPointLayout* _focusPointLayout;

}

@property (nonatomic,retain) id<FBWebImageSpecifier> webImageSpecifier;                  //@synthesize webImageSpecifier=_webImageSpecifier - In the implementation block
@property (nonatomic,retain) FBWebImageFocusPointLayout * focusPointLayout;              //@synthesize focusPointLayout=_focusPointLayout - In the implementation block
-(id)initWithWebImageSpecifier:(id)arg1 focusPoint:(id)arg2 ;
-(void)setWebImageSpecifier:(id<FBWebImageSpecifier>)arg1 ;
-(id<FBWebImageSpecifier>)webImageSpecifier;
-(FBWebImageFocusPointLayout *)focusPointLayout;
-(void)setFocusPointLayout:(FBWebImageFocusPointLayout *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

