/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNMessengerCodeGenerationConfiguration : FBValueObject <NSCopying> {

	double _codeEdgeSize;
	double _padding;
	double _scale;

}

@property (nonatomic,readonly) double codeEdgeSize;              //@synthesize codeEdgeSize=_codeEdgeSize - In the implementation block
@property (nonatomic,readonly) double padding;                   //@synthesize padding=_padding - In the implementation block
@property (nonatomic,readonly) double scale;                     //@synthesize scale=_scale - In the implementation block
-(id)initWithCodeEdgeSize:(double)arg1 padding:(double)arg2 scale:(double)arg3 ;
-(double)codeEdgeSize;
-(double)scale;
-(double)padding;
@end

