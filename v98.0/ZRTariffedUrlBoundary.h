/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBUserSessionClassProvidable.h>

@class ZRUrlRewriter, ZRApplicationState, NSString;

@interface ZRTariffedUrlBoundary : NSObject <FBUserSessionClassProvidable> {

	ZRUrlRewriter* _rewriter;
	ZRApplicationState* _zeroRatingState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(BOOL)urlIsUnsafeWebPage:(id)arg1 ;
-(BOOL)urlIsZeroRatingSafe:(id)arg1 ;
-(id)initWithRewriter:(id)arg1 zeroRatingState:(id)arg2 ;
-(void)dealloc;
@end

