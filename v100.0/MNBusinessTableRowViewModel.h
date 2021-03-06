/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, MNBusinessTableRowLayoutInfo;

@interface MNBusinessTableRowViewModel : FBValueObject <NSCopying> {

	NSArray* _cells;
	MNBusinessTableRowLayoutInfo* _layoutInfo;

}

@property (nonatomic,copy,readonly) NSArray * cells;                                        //@synthesize cells=_cells - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessTableRowLayoutInfo * layoutInfo;              //@synthesize layoutInfo=_layoutInfo - In the implementation block
+(id)MNBusinessTableRowViewModelWithStrings:(id)arg1 colors:(id)arg2 fonts:(id)arg3 layoutInfo:(id)arg4 alignment:(unsigned long long)arg5 ;
+(id)MNBusinessTableRowViewModelWithStrings:(id)arg1 color:(id)arg2 font:(id)arg3 layoutInfo:(id)arg4 alignment:(unsigned long long)arg5 ;
-(id)initWithCells:(id)arg1 layoutInfo:(id)arg2 ;
-(MNBusinessTableRowLayoutInfo *)layoutInfo;
-(NSArray *)cells;
@end

