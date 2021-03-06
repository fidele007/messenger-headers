/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSArray, NSString;

@interface FBBylineViewModel : NSObject {

	NSArray* _attributedEntities;
	NSArray* _attributedInlineStyles;
	NSArray* _imageViewModels;
	NSString* _bylineString;

}

@property (nonatomic,copy,readonly) NSArray * imageViewModels;              //@synthesize imageViewModels=_imageViewModels - In the implementation block
@property (nonatomic,copy,readonly) NSString * bylineString;                //@synthesize bylineString=_bylineString - In the implementation block
+(id)bylineViewModelWithEntity:(id)arg1 ;
+(id)bylineViewModelWithContributors:(id)arg1 date:(id)arg2 dateFormat:(unsigned long long)arg3 ;
-(id)bylineAttributedStringWithTextMetrics:(FBTextMetrics*)arg1 linkTextMetrics:(FBTextMetrics*)arg2 ;
-(NSArray *)imageViewModels;
-(id)initWithContributors:(id)arg1 date:(id)arg2 dateFormat:(unsigned long long)arg3 ;
-(NSString *)bylineString;
-(id)initWithEntity:(id)arg1 ;
@end

