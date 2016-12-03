/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBMediaGalleryTopBarConfiguration : NSObject {

	BOOL _selectButtonEnabled;
	BOOL _backButtonHidden;
	unsigned long long _selectionTitleValue;
	unsigned long long _backButtonStyle;
	NSString* _title;
	double _topLayoutGuideLength;
	unsigned long long _pickerStyle;
	NSString* _actionButtonTitle;

}

@property (assign,nonatomic) unsigned long long selectionTitleValue;              //@synthesize selectionTitleValue=_selectionTitleValue - In the implementation block
@property (assign,nonatomic) unsigned long long backButtonStyle;                  //@synthesize backButtonStyle=_backButtonStyle - In the implementation block
@property (assign,nonatomic) BOOL selectButtonEnabled;                            //@synthesize selectButtonEnabled=_selectButtonEnabled - In the implementation block
@property (assign,nonatomic) BOOL backButtonHidden;                               //@synthesize backButtonHidden=_backButtonHidden - In the implementation block
@property (nonatomic,copy) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) double topLayoutGuideLength;                         //@synthesize topLayoutGuideLength=_topLayoutGuideLength - In the implementation block
@property (nonatomic,readonly) unsigned long long pickerStyle;                    //@synthesize pickerStyle=_pickerStyle - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionButtonTitle;                 //@synthesize actionButtonTitle=_actionButtonTitle - In the implementation block
+(id)configWithActionButtonTitle:(id)arg1 ;
+(id)defaultConfig;
-(void)setBackButtonHidden:(BOOL)arg1 ;
-(void)setTopLayoutGuideLength:(double)arg1 ;
-(double)topLayoutGuideLength;
-(unsigned long long)pickerStyle;
-(void)setBackButtonStyle:(unsigned long long)arg1 ;
-(void)setSelectButtonEnabled:(BOOL)arg1 ;
-(void)setSelectionTitleValue:(unsigned long long)arg1 ;
-(unsigned long long)selectionTitleValue;
-(unsigned long long)backButtonStyle;
-(BOOL)selectButtonEnabled;
-(BOOL)backButtonHidden;
-(id)initWithSelectionTitleValue:(unsigned long long)arg1 backButtonStyle:(unsigned long long)arg2 selectButtonEnabled:(BOOL)arg3 backButtonHidden:(BOOL)arg4 title:(id)arg5 topLayoutGuideLength:(double)arg6 mediaPickerStyle:(unsigned long long)arg7 actionButtonTitle:(id)arg8 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)actionButtonTitle;
@end

