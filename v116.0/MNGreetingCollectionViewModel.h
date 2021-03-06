/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:50 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface MNGreetingCollectionViewModel : FBValueObject <NSCopying> {

	BOOL _showTopLineSeparator;
	NSArray* _greetingViewModels;
	NSString* _recipientName;
	NSString* _entryPoint;

}

@property (nonatomic,copy,readonly) NSArray * greetingViewModels;              //@synthesize greetingViewModels=_greetingViewModels - In the implementation block
@property (nonatomic,readonly) BOOL showTopLineSeparator;                      //@synthesize showTopLineSeparator=_showTopLineSeparator - In the implementation block
@property (nonatomic,copy,readonly) NSString * recipientName;                  //@synthesize recipientName=_recipientName - In the implementation block
@property (nonatomic,copy,readonly) NSString * entryPoint;                     //@synthesize entryPoint=_entryPoint - In the implementation block
-(id)initWithGreetingViewModels:(id)arg1 showTopLineSeparator:(BOOL)arg2 recipientName:(id)arg3 entryPoint:(NSString*)arg4 ;
-(NSArray *)greetingViewModels;
-(BOOL)showTopLineSeparator;
-(NSString *)recipientName;
-(NSString *)entryPoint;
@end

