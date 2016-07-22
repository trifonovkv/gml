#include"box.h" 

void box_set_center_widget(FILE *out, char *child)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_box_set_center_widget(GTK_BOX(%s), %s);\n", 
                widget, child);
}

void box_set_pack_type(FILE *out, char *child, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_box_query_child_packing(GTK_BOX(%s), %s,\
&expand, &fill, &padding, &pack_type);\n", widget, child);
        tab_insert(out);
        fprintf(out, "gtk_box_set_child_packing(GTK_BOX(%s), %s, \
expand, fill, padding, %s);\n", widget, child, setting);
}

void box_set_expand(FILE *out, char *child, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_box_query_child_packing(GTK_BOX(%s), %s,\
&expand, &fill, &padding, &pack_type);\n", widget, child);
        tab_insert(out);
        fprintf(out, "gtk_box_set_child_packing(GTK_BOX(%s), %s, \
%s, fill, padding, pack_type);\n", widget, child, setting);
}

void box_set_fill(FILE *out, char *child, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_box_query_child_packing(GTK_BOX(%s), %s,\
&expand, &fill, &padding, &pack_type);\n", widget, child);
        tab_insert(out);
        fprintf(out, "gtk_box_set_child_packing(GTK_BOX(%s), %s, \
expand, %s, padding, pack_type);\n", widget, child, setting);
}

void box_set_padding(FILE *out, char *child, int setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_box_query_child_packing(GTK_BOX(%s), %s,\
&expand, &fill, &padding, &pack_type);\n", widget, child);
        tab_insert(out);
        fprintf(out, "gtk_box_set_child_packing(GTK_BOX(%s), %s, \
expand, fill, %d, pack_type);\n", widget, child, setting);
}

void box_reorder_child(FILE *out, char *child, int setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_box_reorder_child(GTK_BOX(%s), %s, %d);\n",
                widget, child, setting);
}

void box_set_homogeneous(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_box_set_homogeneous(GTK_BOX(%s), %s);\n",
                widget, setting);
}

void box_set_baseline_position(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_box_set_baseline_position(GTK_BOX(%s), %s);\n",
                widget, setting);
}

void box_set_spacing(FILE *out, int setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_box_set_spacing(GTK_BOX(%s), %d);\n",
                widget, setting);
}

void box_horizontal_new(FILE *out, char *setting)
{
        syminst(TYPE_HBOX, setting, setting);
        syminst(TYPE_HBOX, "this", setting);
        tab_insert(out);
        fprintf(out, "gboolean    expand;\n");
        tab_insert(out);
        fprintf(out, "gboolean    fill;\n");
        tab_insert(out);
        fprintf(out, "guint       padding;\n");
        tab_insert(out);
        fprintf(out, "GtkPackType pack_type;\n");
        tab_insert(out);
        char *orientation = "GTK_ORIENTATION_HORIZONTAL";
        char *spacing = "0";
        fprintf(out, "GtkWidget *%s=gtk_box_new(%s, %s);\n", 
                setting, orientation, spacing);
}

void box_vertical_new(FILE *out, char *setting)
{
        syminst(TYPE_VBOX, setting, setting);
        syminst(TYPE_VBOX, "this", setting);
        tab_insert(out);
        fprintf(out, "gboolean    expand;\n");
        tab_insert(out);
        fprintf(out, "gboolean    fill;\n");
        tab_insert(out);
        fprintf(out, "guint       padding;\n");
        tab_insert(out);
        fprintf(out, "GtkPackType pack_type;\n");
        tab_insert(out);
        char *orientation = "GTK_ORIENTATION_VERTICAL";
        char *spacing = "0";
        fprintf(out, "GtkWidget *%s=gtk_box_new(%s, %s);\n", 
                setting, orientation, spacing);
}

