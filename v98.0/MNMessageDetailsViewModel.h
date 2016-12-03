/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSAttributedString;

@interface MNMessageDetailsViewModel : FBValueObject <NSCopying> {

	BOOL _alignsTextRight;
	BOOL _shouldInsetText;
	BOOL _shouldShowWideGutter;
	NSAttributedString* _detailsText;

}

@property (nonatomic,copy,readonly) NSAttributedString * detailsText;              //@synthesize detailsText=_detailsText - In the implementation block
@property (nonatomic,readonly) BOOL alignsTextRight;                               //@synthesize alignsTextRight=_alignsTextRight - In the implementation block
@property (nonatomic,readonly) BOOL shouldInsetText;                               //@synthesize shouldInsetText=_shouldInsetText - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowWideGutter;                          //@synthesize shouldShowWideGutter=_shouldShowWideGutter - In the implementation block
-(BOOL)shouldShowWideGutter;
-(id)initWithDetailsText:(id)arg1 alignsTextRight:(BOOL)arg2 shouldInsetText:(BOOL)arg3 shouldShowWideGutter:(BOOL)arg4 ;
-(NSAttributedString *)detailsText;
-(BOOL)alignsTextRight;
-(BOOL)shouldInsetText;
@end

