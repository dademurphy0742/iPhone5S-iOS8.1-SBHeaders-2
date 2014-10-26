//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBWindow.h"

@class SBRecycledViewsContainer;

@interface SBWindow : FBWindow
{
    SBRecycledViewsContainer *_recycledViewsContainerView;
    int _jailBehavior;
    id <SBWindowLayoutStrategy> _layoutStrategy;
}

+ (struct CGRect)_actualBoundsForScreen:(id)arg1 withJailBehavior:(int)arg2;
+ (struct UIEdgeInsets)_jailInsetsForScreen:(id)arg1;
@property(readonly, retain, nonatomic) id <SBWindowLayoutStrategy> layoutStrategy; // @synthesize layoutStrategy=_layoutStrategy;
- (_Bool)_isClippedByScreenJail;
- (_Bool)_isConstrainedByScreenJail;
- (id)recycledViewsContainer;
@property(readonly, nonatomic) struct UIEdgeInsets jailInsets;
- (void)dealloc;
- (id)_initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3 scene:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3 scene:(id)arg4;
- (id)initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3;
- (id)initWithScreen:(id)arg1 debugName:(id)arg2 scene:(id)arg3;
- (id)initWithScreen:(id)arg1 debugName:(id)arg2;

@end

