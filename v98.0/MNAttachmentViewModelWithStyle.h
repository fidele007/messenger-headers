/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:03 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSCopying;
@class NSString, NSObject;

@interface MNAttachmentViewModelWithStyle : FBValueObject <NSCopying> {

	NSString* _style;
	NSObject*<NSCopying> _viewModel;

}

@property (nonatomic,copy,readonly) NSString * style;                            //@synthesize style=_style - In the implementation block
@property (nonatomic,copy,readonly) NSObject*<NSCopying> viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
-(id)initWithStyle:(id)arg1 viewModel:(id)arg2 ;
-(NSString *)style;
-(NSObject*<NSCopying>)viewModel;
@end

