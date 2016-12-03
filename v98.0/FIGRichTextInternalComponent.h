/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:08 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CKComponent.h>

@class FIGRichTextInternalLayoutComponent;

@interface FIGRichTextInternalComponent : CKComponent {

	FIGRichTextInternalLayoutComponent* _richTextInternalLayoutComponent;
	CKTypedComponentAction<> _tapAction;
	CKTypedComponentAction<> _linkTapAction;

}
+(id)newWithAttributedString:(id)arg1 font:(id)arg2 color:(id)arg3 maximumNumberOfLines:(unsigned long long)arg4 options:(const FIGRichTextInternalComponentOptions*)arg5 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
-(void)tapAction:(id)arg1 context:(id)arg2 ;
@end

