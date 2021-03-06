/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBGLFilter.h>

@interface LUXFilter : FBGLFilter {

	int uniformLuxSaturationMultiplier;
	int uniformLuxNumHistogramBuckets;

}
-(id)prepareDerivedContext:(id)arg1 withFilterer:(id)arg2 ;
-(id)prepareInputsWithImageData:(unsigned*)arg1 width:(long long)arg2 height:(long long)arg3 derivedContext:(id)arg4 ;
-(id)getHSVFromColorAtIndex:(long long)arg1 inImageData:(unsigned*)arg2 ;
-(double)calculateHueVarianceForImage:(unsigned*)arg1 width:(long long)arg2 height:(long long)arg3 ;
-(id)shaderFunctionIncludes;
-(void)activateWithFilterer:(id)arg1 derivedContext:(id)arg2 ;
-(void)drawWithContext:(id)arg1 ;
-(id)init;
@end

