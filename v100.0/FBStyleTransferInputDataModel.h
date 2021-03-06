/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, NSString, NSURL;

@interface FBStyleTransferInputDataModel : FBValueObject <NSCopying> {

	UIImage* _originalImage;
	NSString* _styleName;
	NSURL* _modelURL;
	NSURL* _modelWeightsURL;

}

@property (nonatomic,copy,readonly) UIImage * originalImage;              //@synthesize originalImage=_originalImage - In the implementation block
@property (nonatomic,copy,readonly) NSString * styleName;                 //@synthesize styleName=_styleName - In the implementation block
@property (nonatomic,copy,readonly) NSURL * modelURL;                     //@synthesize modelURL=_modelURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * modelWeightsURL;              //@synthesize modelWeightsURL=_modelWeightsURL - In the implementation block
-(id)initWithOriginalImage:(id)arg1 styleName:(id)arg2 modelURL:(id)arg3 modelWeightsURL:(id)arg4 ;
-(NSURL *)modelWeightsURL;
-(NSURL *)modelURL;
-(UIImage *)originalImage;
-(NSString *)styleName;
@end

