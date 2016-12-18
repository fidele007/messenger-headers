/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNBusinessLabelViewModel, UIColor;

@interface MNAirlinesAToAViewModel : FBValueObject <NSCopying> {

	BOOL _isCompactLayout;
	MNBusinessLabelViewModel* _airportFromCode;
	MNBusinessLabelViewModel* _airportToCode;
	UIColor* _tintColor;
	CGSize _imageSize;

}

@property (nonatomic,copy,readonly) MNBusinessLabelViewModel * airportFromCode;              //@synthesize airportFromCode=_airportFromCode - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessLabelViewModel * airportToCode;                //@synthesize airportToCode=_airportToCode - In the implementation block
@property (nonatomic,readonly) CGSize imageSize;                                             //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,readonly) BOOL isCompactLayout;                                         //@synthesize isCompactLayout=_isCompactLayout - In the implementation block
@property (nonatomic,copy,readonly) UIColor * tintColor;                                     //@synthesize tintColor=_tintColor - In the implementation block
+(id)MNAirlinesAToAViewModelWithFromCode:(id)arg1 toCode:(id)arg2 tintColor:(id)arg3 font:(id)arg4 imageSize:(CGSize)arg5 isCompactLayout:(BOOL)arg6 ;
-(id)initWithAirportFromCode:(id)arg1 airportToCode:(id)arg2 imageSize:(CGSize)arg3 isCompactLayout:(BOOL)arg4 tintColor:(id)arg5 ;
-(MNBusinessLabelViewModel *)airportFromCode;
-(MNBusinessLabelViewModel *)airportToCode;
-(BOOL)isCompactLayout;
-(UIColor *)tintColor;
-(CGSize)imageSize;
@end
