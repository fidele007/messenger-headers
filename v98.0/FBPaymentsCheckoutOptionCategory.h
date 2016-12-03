/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, FBPaymentsCustomOptionDescriptor;

@interface FBPaymentsCheckoutOptionCategory : FBValueObject <NSCopying> {

	BOOL _isOptional;
	BOOL _allowsMultipleSelection;
	NSArray* _options;
	NSString* _title;
	NSString* _actionableTitle;
	NSString* _optionListTitle;
	NSString* _collectedDataKey;
	FBPaymentsCustomOptionDescriptor* _customOptionDescriptor;

}

@property (nonatomic,copy,readonly) NSArray * options;                                                      //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionableTitle;                                             //@synthesize actionableTitle=_actionableTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * optionListTitle;                                             //@synthesize optionListTitle=_optionListTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * collectedDataKey;                                            //@synthesize collectedDataKey=_collectedDataKey - In the implementation block
@property (nonatomic,readonly) BOOL isOptional;                                                             //@synthesize isOptional=_isOptional - In the implementation block
@property (nonatomic,copy,readonly) FBPaymentsCustomOptionDescriptor * customOptionDescriptor;              //@synthesize customOptionDescriptor=_customOptionDescriptor - In the implementation block
@property (nonatomic,readonly) BOOL allowsMultipleSelection;                                                //@synthesize allowsMultipleSelection=_allowsMultipleSelection - In the implementation block
-(id)initWithOptions:(id)arg1 title:(id)arg2 actionableTitle:(id)arg3 optionListTitle:(id)arg4 collectedDataKey:(id)arg5 isOptional:(BOOL)arg6 customOptionDescriptor:(id)arg7 allowsMultipleSelection:(BOOL)arg8 ;
-(NSString *)actionableTitle;
-(NSString *)optionListTitle;
-(NSString *)collectedDataKey;
-(FBPaymentsCustomOptionDescriptor *)customOptionDescriptor;
-(BOOL)isOptional;
-(BOOL)allowsMultipleSelection;
-(NSString *)title;
-(NSArray *)options;
@end
